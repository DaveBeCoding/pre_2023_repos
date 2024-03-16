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

#include "AES_EX.h"

#include "osrng.h"
using CryptoPP::AutoSeededRandomPool;

// #include <cstdlib>
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

#include <iostream>

#include <string>
using std::string;

#include <cstdlib>
using std::exit;

#include "cryptlib.h"
using CryptoPP::Exception;

#include "hex.h"
using CryptoPP::HexDecoder;
using CryptoPP::HexEncoder;

#include "filters.h"
using CryptoPP::StreamTransformationFilter;
using CryptoPP::StringSink;
using CryptoPP::StringSource;

#include "aes.h"
using CryptoPP::AES;

#include "modes.h"
using CryptoPP::ECB_Mode;
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

AES_Example::AES_Example(/* args */) : user_Message{" "}
{
    /*Data*/
}

string AES_Example::Set_Message()
{
    cout << " Enter Message to be encrypted " << endl;
    getline(cin, user_Message);
    std::system("clear");

    return user_Message;
}

void AES_Example::Scrambler()
{
    std::system("clear");
    AutoSeededRandomPool prng;

    byte key[AES::DEFAULT_KEYLENGTH];
    prng.GenerateBlock(key, sizeof(key));

    string plain = Set_Message();
    string cipher, encoded, recovered;

    //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    encoded.clear();
    StringSource(key, sizeof(key), true,
                 new HexEncoder(new StringSink(encoded)));

    cout << "key: " << encoded << endl;

    //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    try
    {
        cout << "plain text: " << plain << endl;

        ECB_Mode<AES>::Encryption e;
        e.SetKey(key, sizeof(key));

        // The StreamTransformationFilter adds padding
        //  as required. ECB and CBC Mode must be padded
        //  to the block size of the cipher.
        StringSource(plain, true,
                     new StreamTransformationFilter(e,
                                                    new StringSink(cipher)) // StreamTransformationFilter
        );                                                                  // StringSource
    }
    catch (const CryptoPP::Exception &e)
    {
        cerr << e.what() << endl;
        exit(1);
    }

    //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    // Pretty print
    encoded.clear();
    StringSource(cipher, true,
                 new HexEncoder(
                     new StringSink(encoded)) // HexEncoder
    );                                        // StringSource
    cout << "cipher text: " << encoded << endl;

    //$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

    try
    {
        ECB_Mode<AES>::Decryption d;
        d.SetKey(key, sizeof(key));

        // The StreamTransformationFilter removes
        //  padding as required.
        StringSource s(cipher, true,
                       new StreamTransformationFilter(d,
                                                      new StringSink(recovered)) // StreamTransformationFilter
        );                                                                       // StringSource

        cout << "recovered text: " << recovered << endl;
    }
    catch (const CryptoPP::Exception &e)
    {
        cerr << e.what() << endl;
        exit(1);
    }

} // end Scrambler

AES_Example::~AES_Example()
{
    cin.ignore();
    std::system("clear");
    cout << " HAPPY CODING! " << endl;
}