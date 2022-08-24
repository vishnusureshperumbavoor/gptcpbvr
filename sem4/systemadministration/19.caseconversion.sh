echo enter file name 
read file 
if [ -e $file -a -f $file ]
then 
    echo contents of original file
    cat $file 

    tr a-z A-Z <$file> temp
    echo new file with upper case letters
    cat temp
else 
    echo $file does not exist or it is not a file 
fi 