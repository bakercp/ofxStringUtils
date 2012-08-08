/*==============================================================================
 
 Copyright (c) 2010, 2011, 2012 Christopher Baker <http://christopherbaker.net>
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 ==============================================================================*/

#pragma once

#include "ofMain.h"
#include "Poco/String.h"
#include "Poco/UTF8String.h"
#include <set>

#include "alphanum.hpp"

// todo integrate with ofxunicode make all default to UTF8 based 

int ofxCharAt(const string& s0, unsigned int pos);
//ofxUnicode ofxCharCodeAt(const string& s0, unsigned int pos);

int ofxStringCompareAlphaNum(const string& s0, const string& s1);

int ofxStringLexographicCompare(const string& s0, const string& s1, bool ignoreCase = false);

inline int ofxStringCompare(const string& s0, const string& s1, bool ignoreCase = false) {
    if(ignoreCase) {
        return Poco::UTF8::icompare(s0,s1);
    } else {
        return s0.compare(s1);
    }
}

inline int ofxStringCompareIgnoreCase(const string& s0, const string& s1) {
    return ofxStringCompare(s0,s1,true);
}

inline bool ofxStringEquals(const string& s0, const string& s1, bool ignoreCase = false) {
    if(ignoreCase) {
        return Poco::UTF8::icompare(s0,s1) == 0;
    } else {
        return s0.compare(s1) == 0;
    }
}

inline bool ofxStringEqualsIgnoreCase(const string& s0, const string& s1) {
    return ofxStringEquals(s0,s1,true);
}

bool ofxStringEndsWith(const string& input, const string& endsWith, bool ignoreCase = false);
bool ofxStringEndsWithIgnoreCase(const string& input, const string& endsWith);

bool ofxStringEndsWithAny(const string& input, const vector<string>& endsWith, bool ignoreCase = false);
bool ofxStringEndsWithAnyIgnoreCase(const string& input, const vector<string>& endsWith);

bool ofxStringStartsWith(const string& input, const string& endsWith, bool ignoreCase = false);
bool ofxStringStartsWithIgnoreCase(const string& input, const string& endsWith);

bool ofxStringStartsWithAny(const string& input, const vector<string>& endsWith, bool ignoreCase = false);
bool ofxStringStartsWithAnyIgnoreCase(const string& input, const vector<string>& endsWith);


bool ofxStringContains(const string& haystack, const string& needle);

int ofxStringIndexOf(const string& input, unsigned char utf8Char, int fromIndex, bool ignoreCase = false);
int ofxStringIndexOfIgnoreCase(const string& input, unsigned char utf8Char, int fromIndex);

int ofxStringLastIndexOf(unsigned char utf8Char, int fromIndex, bool ignoreCase = false);
int ofxStringLastIndexOfIgnoreCase(unsigned char utf8Char, int fromIndex);

int ofxStringIndexOfExcept(const string& input, unsigned char utf8Char, int fromIndex, bool ignoreCase = false);
int ofxStringIndexOfExceptIgnoreCase(const string& input, unsigned char utf8Char, int fromIndex);

int ofxStringLastIndexOfExcept(const string& input, unsigned char utf8Char, int fromIndex, bool ignoreCase = false);
int ofxStringLastIndexOfExceptIgnoreCase(const string& input, unsigned char utf8Char, int fromIndex);

string ofxStringPadLeft(const string& input, int numToPad, const string& padValue = "");
string ofxStringPadLeftInPlace(string& input, int numToPad, const string& padValue = "");

string ofxStringPadRight(const string& input, int numToPad, const string& padValue = "");
string ofxStringPadRightInPlace(string& input, int numToPad, const string& padValue = "");

string ofxStringPad(const string& input, int numToPad, const string& padValue = "");
string ofxStringPadInPlace(string& input, int numToPad, const string& padValue = "");

string ofxStringCenter(const string& input, int maxChars, const string& padValue = "");
string ofxStringCenterInPlace(string& input, int maxChars, const string& padValue = "");

string ofxStringRepeat(const string& valueToRepeat, int numTimes, const string& separator = "" );

string ofxStringChop(const string& input);
string ofxStringChopInPlace(string& input);

string ofxStringChomp(const string& input);
string ofxStringChompInPlace(string& input);

string ofxStringChomp(const string& input, const string& delimiter);
string ofxStringChompInPlace(string& input, const string& delimiter);

string ofxStringOverlay(const string& input, const string& overlayString, int start, int stop);
string ofxStringOverlayInPlace(const string& input, const string& overlayString, int start, int stop);


int ofxStringCountMatches(const string& input, const string& regex);

//bool isAlpha
//bool isNumeric
//bool isWhitespace
//bool isAsciiPrintable



//http://commons.apache.org/lang/api-2.5/org/apache/commons/lang/StringUtils.html
bool isStringEmpty(const string& input);
bool isStringBlank(const string& input);

string ofxStringJoin(const vector<string>& strings, const string& delimiter);
string ofxStringJoin(const set<string>& strings, const string& delimiter);

string ofxStringRemoveWhitespace(const string& input);
string ofxStringRemoveWhitespaceInPlace(string& input);

string ofxStringRemove(const string& input, const string& regex, const string& replacement);
string ofxStringRemoveInPlace(string& input, string& regex, const string& replacement);

string ofxStringRemove(const string& input, const string& regex, const string& replacement);
string ofxStringRemoveInPlace(string& input, string& regex, const string& replacement);

string ofxStringRemoveStartNth(const string& input, const string& regex, const string& replacement);
string ofxStringRemoveStartNthInPlace(string& input, string& regex, const string& replacement);

string ofxStringRemoveStartIgnoreCase(const string& input, const string& regex, const string& replacement);
string ofxStringRemoveStartIgnoreCaseInPlace(string& input, string& regex, const string& replacement);

string ofxStringRemoveEnd(const string& input, const string& regex, const string& replacement);
string ofxStringRemoveEndInPlace(string& input, string& regex, const string& replacement);

string ofxStringRemoveEndIgnoreCase(const string& input, const string& regex, const string& replacement);
string ofxStringRemoveEndIgnoreCaseInPlace(string& input, string& regex, const string& replacement);


string ofxStringReplace(const string& input, const string& regex, const string& replacement);
string ofxStringReplaceInPlace(string& input, string& regex, const string& replacement);

string ofxStringReplaceOnce(const string& input, const string& regex, const string& replacement);
string ofxStringReplaceOnceInPlace(string& input, string& regex, const string& replacement);

string ofxStringReplaceAll(const string& input, const string& regex, const string& replacement);
string ofxStringReplaceAllInPlace(string& input, const string& regex, const string& replacement);
string ofxStringReplaceFirst(const string& input, const string& regex, const string& replacement);
string ofxStringReplaceFirstInPlace(string& input, const string& regex, const string& replacement);

string ofxStringReplaceEach(const string& input, const vector<string>& searchList, const vector<string>& replacementList );
string ofxStringReplaceEachInPlace(string& input, const vector<string>& searchList, const vector<string>& replacementList );

string ofxStringReplaceRepeatedly(const string& input, const vector<string>& searchList, const vector<string>& replacementList );
string ofxStringReplaceRepeatedlyInPlace(string& input, const vector<string>& searchList, const vector<string>& replacementList );


string ofxSubstring(const string& input, int beginIndex);
string ofxSubstring(const string& input, int beginIndex, int endIndex);

string ofxSubstringBefore(const string& input, const string& seperator);
string ofxSubstringAfter(const string& input, const string& seperator);

string ofxSubstringBeforeLast(const string& input, const string& seperator);
string ofxSubstringAfterLast(const string& input, const string& seperator);

string ofxSubstringBetween(const string& input, const string& seperator);
string ofxSubstringBetween(const string& input, const string& open, const string& close);
vector<string> ofxSubstringsBetween(const string& input, const string& open, const string& close);



bool ofxStringIsAllUpperCase(const string& input);
bool ofxStringIsAllLowerCase(const string& input);

// TODO: add support for locales with ofxLocale
string ofxStringToUpperCase(const string& input);
string ofxStringToUpperCaseInPlace(string& input);

//http://commons.apache.org/lang/api-3.0/org/apache/commons/lang3/text/WordUtils.html#capitalize(java.lang.String)

string ofxCapitalize(const string& input, const string& delimiters = "");
string ofxCapitalizeInPlace(string& input, const string& delimiters = "");
string ofxCapitalizeFully(const string& input, const string& delimiters = "");
string ofxCapitalizeFullyInPlace(string& input, const string& delimiters = "");
string ofxUncapitalize(const string& input, const string& delimiters = "");
string ofxUncapitalizeInPlace(string& input, const string& delimiters = "");
string ofxUncapitalizeFully(const string& input, const string& delimiters = "");
string ofxUncapitalizeFullyInPlace(string& input, const string& delimiters = "");

string ofxStringSwapCase(const string& input);
string ofxStringSwapCaseInPlace(string& input);

string ofxStringInitials(const string& input);
string ofxStringInitialsInPlace(string& input);

string ofxStringTrimLeft(const string& input);
string ofxStringTrimLeftInPlace(string& input);

string ofxStringTrimRight(const string& input);
string ofxStringTrimRightInPlace(string& input);

string ofxStringTrim(const string& input);
string ofxStringTrimInPlace(string& input);

string ofxStringReverse(const string& input);
string ofxStringReverseInPlace(string& input);

//http://commons.apache.org/lang/api-2.5/org/apache/commons/lang/StringUtils.html#reverseDelimited(java.lang.String, char)
string ofxStringReverseDelimited(const string& input, const string& delimiter);
string ofxStringReverseDelimitedInPlace(string& input, const string& delimiter);

string ofxStringDefaultIfEmpty(const string& input, const string& defaultString);

string ofxStringAbbreviate(const string& input, int maxChars);
string ofxStringAbbreviateInPlace(string& input, int maxChars);

string ofxStringAbbreviate(const string& input, int offset, int maxChars);
string ofxStringAbbreviateInPlace(string& input, int offset, int maxChars);

//http://commons.apache.org/lang/api-2.5/org/apache/commons/lang/StringUtils.html#reverseDelimited(java.lang.String, char)string ofxStringAbbreviateMiddle(const string& input, const string& middleString, int maxChars);
string ofxStringAbbreviateMiddleInPlace(string& input, const string& middleString, int maxChars);

string ofxStringDifference(const string& s0, const string& s1);
int ofxStringIndexOfDifference(const string& s0, const string& s1);
int ofxStringIndexOfDifference(const vector<string>& strings);

string ofxStringGetCommonPrefix(const vector<string>& strings);

int ofxStringGetLevenshteinDistance(const string& s0, const string& s1);

vector<string> ofxStringSplit(const string& regex, int limit = -1);

vector<string> ofxStringSplitByCharacterType(const string& input);
vector<string> ofxStringSplitByCharacterCamelCase(const string& input);

vector<string> ofxStringSplitPreserveAllTokens(const string& input, const string& regexSeperator, int max = -1);
vector<string> ofxStringSplitByWholeSeperator(const string& input, const string& regexSeperator, int max = -1);
vector<string> ofxStringSplitByWholeSeperatorPreserveAllTokens(const string& input, const string& regexSeperator, int max = -1);


string ofxStringWrap(const string& input, int nCharsWidth);


string ofxEscapeString(const string& input);
string ofxEscapeStringInPlace(string& input);

string ofxUnescapeString(const string& input);
string ofxUnescapeStringInPlace(string& input);

string ofxURLEncodeString(const string& input);
string ofxURLEncodeStringInPlace(string& input);

string ofxURLUnencodeString(const string& input);
string ofxURLUnecodeStringInPlace(string& input);


