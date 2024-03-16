#!/bin/sh
        # File: /CPSC-254/week-05/project-01/del.sh
        # Date: Fri Sep 24 11:47:10 PDT 2021
        # Description: Delete the line specified by the user.
        # ======================================================================= 

        BOOK="address-book.txt"

        # Ask the user which line to delete
        echo -n "Which line should I delete: "
        read number

        # Rename the file before deleting
        mv $BOOK boo.txt

        # Add line numbers and delete against that number
        nl --number-separator=":" boo.txt | grep -v $number: | awk -F: '{print $2}' |  tee $BOOK
