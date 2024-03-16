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

// ATTENTION! <------------------------------------------------------------
//This is just a simple project made out of boredom, and the WILL TO LEARN.

#include "AES_EX.cpp"
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
int main(int argc, char const *argv[])
{
    AES_Example object_AES;
    object_AES.Scrambler();
    return 0;
}

/*
Some generalized PROs vs CONs

PROS OF ALGORITHM
            *FAST
            *EFFICIENT FOR LARGE DATA
        
CONS OF ALGORITHM
            * HARD TO TRANSPORT/SHARE KEY*
        
Using over network can be done, howEver more steps should be explored FOR THE SAFETY OF YOUR DATA.

Example Problem, Share the key. (This is not a step by step, just simple example problem )
In general Network communication should be initiate over a asymmetrically encrypted connection 
Which then one could use this connect to share (public key) to transfer the symmetric-key (private key)
*/