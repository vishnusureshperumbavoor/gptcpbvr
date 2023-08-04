echo enter the filename 
read file 
echo characters = `cat $file | wc -c`
echo words = `cat $file | wc -w`
echo lines = `cat $file | wc -l`
