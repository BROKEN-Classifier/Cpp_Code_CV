#include <iostream>
#include <string>
#include <fstream>
#include <utility>
#include <map>
#include <queue>

using namespace std;

int main(int argc, const char* argv[]) {
	ifstream file("C:\\PATH\\TO\\FAUST\\FILE");

	string word;
	map<string, int> occerences;
	while (!file.eof()) {
		file >> word;
		if (occerences.count(word) == 0) {
			occerences.insert(pair<string, int>(word, 1));
		}
		else {
			occerences[word]++;
		}
	}
	priority_queue<pair<int, string>> faust_pq;
	for (const auto& word : occerences) {
		pair<int, string> pqEntry(word.second, word.first);
		faust_pq.push(pqEntry);
	}
	
	for (int i = 0; i < 20; i++) {
		cout << faust_pq.top().second << ": " << faust_pq.top().first << endl;
		faust_pq.pop();
	}

	file.close();
	
}


