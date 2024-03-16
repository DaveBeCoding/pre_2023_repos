// The MIT License (MIT)

// Copyright (c) 2020 NUllBitCoder

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

#ifndef AES_EX
#define AES_EX

#include <iostream>
#include <cstddef>
#include <string>

/*
    About the Algorithm:
        AES Encryption is a method for scrambling data.
        A key is used to mix up data such that it can be
        Securely stored or transferred over a network, and 
        only person with the key can unscramble the data.
        
        It is a symmetric key encryption algorithm. This 
        means that the same key is used to Scramble the data 
        and unscramble it.  
*/

class AES_Example
{
private:
    std::string user_Message;

public:
    AES_Example(/* args */);
    ~AES_Example();
    std::string Set_Message();
    void Scrambler();
};
#endif