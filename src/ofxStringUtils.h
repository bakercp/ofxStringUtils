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

#include "alphanum.hpp"

int ofxCharAt(const string& s0, unsigned int pos);

int ofxStringCompareAlphaNum(const string& s0, const string& s1);

int ofxStringCompare(const string& s0, const string& s1, bool ignoreCase = false);
int ofxStringCompareIgnoreCase(const string& s0, const string& s1);

bool ofxStringEquals(const string& s0, const string& s1, bool ignoreCase = false);
bool ofxStringEqualsIgnoreCase(const string& s0, const string& s1);

bool ofxStringEndsWith(const string& input, const string& endsWith, bool ignoreCase = false);
bool ofxStringEndsWithIgnoreCase(const string& input, const string& endsWith);

bool ofxStringStartsWith(const string& input, const string& endsWith, bool ignoreCase = false);
bool ofxStringStartsWithIgnoreCase(const string& input, const string& endsWith);

bool ofxStringContains(const string& haystack, const string& needle);

int ofxStringIndexOf(const string& input, unsigned char utf8Char, int fromIndex, bool ignoreCase = false);
int ofxStringIndexOfIgnoreCase(const string& input, unsigned char utf8Char, int fromIndex);

int ofxStringLastIndexOf(unsigned char utf8Char, int fromIndex, bool ignoreCase = false);
int ofxStringLastIndexOfIgnoreCase(unsigned char utf8Char, int fromIndex);

string ofxStringReplace(const string& regex, const string& replacement);
string ofxStringReplaceAll(const string& regex, const string& replacement);
string ofxStringReplaceFirst(const string& regex, const string& replacement);

string ofxStringReplaceInPlace(const string& regex, const string& replacement);
string ofxStringReplaceAllInPlace(const string& regex, const string& replacement);
string ofxStringReplaceFirstInPlace(const string& regex, const string& replacement);

string ofxSubstring(const string& input, int beginIndex);
string ofxSubstring(const string& input, int beginIndex, int endIndex);

//
string ofxStringToUpperCase(const string& input);
string ofxStringToUpperCaseInPlace(string& input);

//http://commons.apache.org/lang/api-3.0/org/apache/commons/lang3/text/WordUtils.html#capitalize(java.lang.String)

string ofxCapitalize(const string& input, const string& delimiters = "");
string ofxCapitalizeInPlace(const string& input, const string& delimiters = "");
string ofxCapitalizeFully(const string& input, const string& delimiters = "");
string ofxCapitalizeFullyInPlace(const string& input, const string& delimiters = "");
string ofxUncapitalize(const string& input, const string& delimiters = "");
string ofxUncapitalizeInPlace(const string& input, const string& delimiters = "");
string ofxUncapitalizeFully(const string& input, const string& delimiters = "");
string ofxUncapitalizeFullyInPlace(const string& input, const string& delimiters = "");

string ofxStringSwapCase(const string& input);
string ofxStringSwapCaseInPlace(const string& input);

string ofxStringInitials(const string& input);
string ofxStringInitialsInPlace(const string& input);

string ofxStringTrim(const string& input);
string ofxStringTrimInPlace(const string& input);

vector<string> ofxStringSplit(const string& regex, int limit = -1);

string ofxStringWrap(const string& input, int nCharsWidth);


