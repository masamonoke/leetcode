#include "length_of_last_word.hpp"

#include <set>

void trim(std::string& s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](char ch) {
		return !std::isspace(ch);
	}));
	s.erase(std::find_if(s.rbegin(), s.rend(), [](char ch) {
		return !std::isspace(ch);
	}).base(), s.end());
}

int length_of_last_word(std::string s) {
	if (s.length() == 1) {
		return 1;
	}

	trim(s);

	if (s.length() == 1) {
		return 1;
	}

	int i = s.length() - 1;
	while (i > 0 && s[--i] != ' ') {
	}
	if (i == 0) {
		return s.length();
	} else {
		return s.length() - i - 1;
	}
}
