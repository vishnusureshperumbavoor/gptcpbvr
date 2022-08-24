echo enter the name of the file 
read file 
if [ -e $file ]
then 
    echo $file exists 
else 
    echo $file does not exits 
fi 