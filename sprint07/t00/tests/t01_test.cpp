#include <iostream>
#include <string>
#include <cassert>

#include "CBLBasicString.h"
#include "CBLString.h"
#include "CBLWString.h"

int main() {
    CBL::BasicString<char> str;
    std::basic_string<char> stdstr;

    assert(str.length() == stdstr.length());
    assert(strcmp(str.c_str(), stdstr.c_str()) == 0);

    CBL::BasicString<char> str1("hello");
    std::basic_string<char> stdstr1("hello");

    assert(str1.length() == stdstr1.length());
    assert(strcmp(str1.c_str(), stdstr1.c_str()) == 0);
    assert(stdstr1.compare("hello") == 0);
    assert(str1.compare("hello") == 0);
    assert(stdstr1.compare("hell") > 0);
    assert(str1.compare("hell") > 0);

    CBL::BasicString<char> str2("trello");
    std::basic_string<char> stdstr2("trello");

    assert(str2.length() == stdstr2.length());
    assert(stdstr1.compare(stdstr2) != 0);
    assert(str1.compare(str2) != 0);
    assert(stdstr1.compare(stdstr2) < 0);
    assert(str1.compare(str2) < 0);

    CBL::BasicString<char> str3(str2);
    std::basic_string<char> stdstr3(stdstr2);

    assert(str3.length() == stdstr3.length());
    assert(strcmp(str3.c_str(), stdstr3.c_str()) == 0);
    assert(str3.compare(str2) == 0);

    std::basic_string<char> stdstr4(stdstr2, 3, 1);
    CBL::BasicString<char> str4(str2, 3, 1);

    assert(str4.length() == stdstr4.length());
    assert(strcmp(str4.c_str(), stdstr4.c_str()) == 0);
    assert(str4.compare("l") == 0);

    std::basic_string<char> stdstr5(stdstr2, 3, 999);
    CBL::BasicString<char> str5(str2, 3, 999);

    assert(str5.length() == stdstr5.length());
    assert(strcmp(str5.c_str(), stdstr5.c_str()) == 0);
    assert(str5.compare("llo") == 0);

    std::basic_string<char> stdstr6("hello", 4);
    CBL::BasicString<char> str6("hello", 4);

    assert(str6.length() == stdstr6.length());
    assert(strcmp(str6.c_str(), stdstr6.c_str()) == 0);
    assert(str6.compare("hell") == 0);

    std::basic_string<char> stdstr7(stdstr6.begin() + 1, stdstr6.end());
    CBL::BasicString<char> str7(str6.begin() + 1, str6.end());

    assert(str7.length() == stdstr7.length());
    assert(strcmp(str7.c_str(), stdstr7.c_str()) == 0);
    assert(str7.compare("ell") == 0);

    std::basic_string<char> stdstr8("hello");
    CBL::BasicString<char> str8("hello");

    assert(str8[2] == 'l');
    assert(str8[4] == 'o');
    assert(str8[5] != 'o');
    assert(str8[5] == '\0');

    assert(str8.at(2) == 'l');
    assert(str8.at(4) != '\0');

    try {
        str8.at(6);
    }
    catch(const std::out_of_range& err) {}

    assert(stdstr8.back() == 'o');
    assert(str8.back() == 'o');
    assert(stdstr.back() == '\0');
    assert(str.back() == '\0');

    assert(stdstr8.front() == 'h');
    assert(str8.front() == 'h');
    assert(stdstr.front() == '\0');
    assert(str.front() == '\0');

    CBL::BasicString<char> str9 = str8;
    std::basic_string<char> stdstr9 = stdstr8;

    assert(str9.length() == str8.length());
    assert(strcmp(str9.c_str(), str8.c_str()) == 0);
    assert(strcmp(str9.c_str(), stdstr8.c_str()) == 0);

    str9 = "CBL";
    stdstr9 = "CBL";

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "CBL") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9 = 'A';
    stdstr9 = 'A';

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "A") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9 += str9;
    stdstr9 += stdstr9;

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "AA") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9 += "BB";
    stdstr9 += "BB";

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "AABB") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9 += 'C';
    stdstr9 += 'C';

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "AABBC") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9.append(str9);
    stdstr9.append(stdstr9);

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "AABBCAABBC") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9.append("hello");
    stdstr9.append("hello");

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "AABBCAABBChello") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9.append("hello", 3);
    stdstr9.append("hello", 3);

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "AABBCAABBChellohel") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9.append(3, '6');
    stdstr9.append(3, '6');

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "AABBCAABBChellohel666") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9.append(str9.begin() + 2, str9.end());
    stdstr9.append(stdstr9.begin() + 2, stdstr9.end());

    assert(str9.length() == stdstr9.length());
    assert(strcmp(str9.c_str(), "AABBCAABBChellohel666BBCAABBChellohel666") == 0);
    assert(strcmp(str9.c_str(), stdstr9.c_str()) == 0);

    str9.swap(str8);
    stdstr9.swap(stdstr8);

    assert(str9.length() == 5);
    assert(str8.length() == 40);
    assert(strcmp(str8.c_str(), "AABBCAABBChellohel666BBCAABBChellohel666") == 0);
    assert(strcmp(str9.c_str(), "hello") == 0);

    CBL::BasicString<char> str10("Hello");
    CBL::BasicString<char> str11("World");
    std::basic_string<char> stdstr10("Hello");
    std::basic_string<char> stdstr11("World");

    assert(strcmp((str10 + str11).c_str(), "HelloWorld") == 0);
    assert(strcmp((stdstr10 + stdstr11).c_str(), "HelloWorld") == 0);
    assert((str10 + str11).length() == (stdstr10 + stdstr11).length());

    assert(strcmp(("Hello" + str11).c_str(), "HelloWorld") == 0);
    assert(strcmp(("Hello" + stdstr11).c_str(), "HelloWorld") == 0);
    assert(("Hello" + str11).length() == ("Hello" + stdstr11).length());

    assert(strcmp((str10 + "World").c_str(), "HelloWorld") == 0);
    assert(strcmp((stdstr10 + "World").c_str(), "HelloWorld") == 0);
    assert((str10 + "World").length() == (stdstr10 + "World").length());

    assert(strcmp(('A' + str11).c_str(), "AWorld") == 0);
    assert(strcmp(('A' + stdstr11).c_str(), "AWorld") == 0);
    assert(('A' + str11).length() == ('A' + stdstr11).length());

    assert(strcmp((str10 + 'A').c_str(), "HelloA") == 0);
    assert(strcmp((stdstr10 + 'A').c_str(), "HelloA") == 0);
    assert((str10 + 'A').length() == (stdstr10 + 'A').length());

    CBL::BasicString<char> str12("Hello");
    std::basic_string<char> stdstr12("Hello");
    CBL::BasicString<char> str13("LolKek");
    std::basic_string<char> stdstr13("LolKek");

    assert(str12 == str12);
    assert(stdstr12 == stdstr12);

    assert("Hello" == str12);
    assert("Hello" == stdstr12);

    assert(str12 == "Hello");
    assert(stdstr12 == "Hello");

    assert(str12 != str13);
    assert(stdstr12 != stdstr13);

    assert("A" != str13);
    assert("A" != stdstr13);

    assert(str13 != "Hehehe");
    assert(stdstr13 != "hahahahha");

    assert(str12 < str13);
    assert(stdstr12 < stdstr13);

    assert("AAA" < str13);
    assert("BBB" < stdstr13);

    assert(str12 < "Lol");
    assert(stdstr12 < "Lol");

    assert(str12 <= str12);
    assert(stdstr12 <= stdstr12);

    assert("AAA" <= str13);
    assert("BBB" <= stdstr13);

    assert(str12 <= "Hello");
    assert(stdstr12 <= "Hello");

    assert(str13 > str12);
    assert(stdstr13 > stdstr12);

    assert("P" > str12);
    assert("P" > stdstr12);

    assert(str12 > "1");
    assert(stdstr12 > "1");

    assert(str13 >= str13);
    assert(stdstr13 >= stdstr13);

    assert("ZZZ" >= str13);
    assert("ZZZ" >= stdstr13);

    assert(str13 >= "AAA");
    assert(stdstr13 >= "AAA");

    CBL::String s("abz");
    std::string s1("abz");

    assert(s1.find('a', 2) == s.find('a', 2));
    assert(s1.find('a', 31) == s.find('a', 31));
    assert(s1.find('a', 0) == s.find('a', 0));

    return 0;
}
