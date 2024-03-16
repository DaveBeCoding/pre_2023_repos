#!/bin/sh
        # File: CPSC-254/week-05/project-01/list.sh
        # Date: Fri Sep 24 11:47:10 PDT 2021
        # Description: List the entries in the address book with line numbers. 
        # ======================================================================= 

        BOOK="address-book.txt" 

        # Display the format before the entries
        echo "Line Number:   Name  ;  Phone Number"

        # Print the book with line numbers and paused with less
        nl --number-separator=":    " $BOOK | less 