echo enter filename or directory name 
read inp
if [ -f $inp ]
then 
    echo file
elif [ -d $inp ]
then 
    echo directory 
else 
    echo doesnt exist 
fi