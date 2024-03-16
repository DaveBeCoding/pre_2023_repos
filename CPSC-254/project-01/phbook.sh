#!/bin/sh
        # File: CPSC-254/week-05/project-01/phone.sh
        # Date: Fri Sep 24 11:47:10 PDT 2021
        # Description: Master script for phone book program
        # ======================================================================= 

        # Name of address book
        BOOK="address-book.txt"

        exit=0

        while [ $exit -ne 1 ]
        do
            echo "What operation do you want?"
            echo -e "add, list, find, del, exit: "
            read answer

            if [ "$answer" = "add" ]
            then
                ./add.sh
            elif [ "$answer" = "list" ]
            then
                ./list.sh
            elif [ "$answer" = "find" ]
            then
                ./find.sh
            elif [ "$answer" = "del" ]
            then
                ./del.sh
            elif [ "$answer" = "exit" ]
            then
                exit=1
            else
                echo "I do not understand the command."
            fi
        done

        exit 0

