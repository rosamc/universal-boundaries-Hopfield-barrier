for folder in `ls`
do
if [ -d $folder ];
then
if [[ $folder != 2022_07_12* ]];
then
echo $folder

rm ${folder}/*.out
rm ${folder}/*.err
rm -rf ${folder}/tocheck*
rm ${folder}/final_results/*
fi 
fi

done
