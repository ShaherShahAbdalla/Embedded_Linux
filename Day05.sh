#!/bin/bash

USERNAME="shaher"
GROUPNAME="shaher"

#Check if the user exists or not:
if grep -q "$USERNAME" /etc/passwd; then
    	echo "The user named '$USERNAME' is already existing :)"
else
#if the user doesn't exist, then create it:
    	sudo useradd "$USERNAME"
    	echo "The user named '$USERNAME' is created successfully :)"
fi


#Check if the group exists or not:
if grep -q "$GROUPNAME" /etc/group; then
   	echo "The group named '$GROUPNAME' is already existing :)"
else
#if the user doesn't exist, then create it:
	sudo groupadd "$GROUPNAME"
    	echo "The group named '$GROUPNAME' is created successfully :)"
    
#Adding the user to the group:
	sudo usermod -aG "$GROUPNAME" "$USERNAME"
	echo "The user named '$USERNAME' is added to the group named '$GROUPNAME' :D"
fi


#Displaying the user's information:
echo -e "\nUser Information:"
id "$USERNAME"


#Displaying the group's information:
echo -e "\nGroup Information:"
getent group "$GROUPNAME"
