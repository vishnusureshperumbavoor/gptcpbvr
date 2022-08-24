echo enter name of the destination
read des
echo enter name of the source file
read src
cat $src > $des status=$?
if [ $status -eq ]
then
	echo file copied successfully
else 
	echo error
fi