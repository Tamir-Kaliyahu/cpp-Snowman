/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
#include <iostream>
//#include <numeric>
//#include <string_view>
#include <vector>
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 * 
 */

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(41114411))==nospaces(" _\n(*)\n(.,.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(42114411))==nospaces(" _\n(*)\n(...)\n(:)\n(:)"));
       CHECK(nospaces(snowman(43114411))==nospaces(" _\n(*)\n(._.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(44114411))==nospaces(" _\n(*)\n(. .)\n(:)\n(:)"));
       CHECK(nospaces(snowman(41214411))==nospaces(" _\n(*)\n(o,.)\n(:)\n(:)"));
       CHECK(nospaces(snowman(11111111))==nospaces(" ===\n(.,.)\n<(:)>\n(:)"));
       CHECK(nospaces(snowman(41214432))==nospaces(" _\n(*)\n(o,.)\n(><)\n(" ")"));
       CHECK(nospaces(snowman(41214422))==nospaces(" _\n(*)\n(o,.)\n(][)\n(" ")"));
       CHECK(nospaces(snowman(41211122))==nospaces(" _\n(*)\n(o,.)\n<(][)>\n(" ")"));
       CHECK(nospaces(snowman(14212422))==nospaces(" ===\n\\(o .)\n(][)\n(" ")"));
      
	/* Add more checks here */
}

TEST_CASE("Bad snowman code: lenghth need to be 8!") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(2));//error len
    CHECK_THROWS(snowman(909));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(106789));//>8 length
    CHECK_THROWS(snowman(123));//<8length
    CHECK_THROWS(snowman(12345679));//num error (9)

    /* Add more checks here */
}

TEST_CASE("Bad snowman code negative num"){
      CHECK_THROWS(snowman(-3));
    CHECK_THROWS(snowman(-555));
    CHECK_THROWS(snowman(-123456789));
    CHECK_THROWS(snowman(-123));
}



/* Add more test cases here */
