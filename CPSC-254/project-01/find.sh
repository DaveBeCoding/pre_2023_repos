#!/bin/sh
        # File: CPSC-254/week-05/project-01/find.sh
        # Date: Fri Sep 24 11:47:10 PDT 2021
        # Description: Find a specific line in the file.
        # ======================================================================= 

        BOOK="address-book.txt"

        # Ask the user what to look for.
        echo -n "What person or number are you seeking: "
        read find

        # Print the header before the answer
        echo "Name ; Phone number"
        grep -i $find $BOOK