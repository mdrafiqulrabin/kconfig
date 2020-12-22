# raw -> process
mkdir -p ../info/process && cp ../info/raw/* ../info/process/

#Statement:
sed -i '' '/File/d' ../info/process/*statement.txt
sed -i '' '/Creating/d' ../info/process/*statement.txt
sed -i '' '/Removing/d' ../info/process/*statement.txt
sed -i '' '/No/d' ../info/process/*statement.txt
sed -i '' '/^$/d' ../info/process/*statement.txt
sed -i '' 's/Lines executed://g' ../info/process/*statement.txt
sed -i '' 's/% of /,/g' ../info/process/*statement.txt

#Branch:
sed -i '' '/File/d' ../info/process/*branch.txt
sed -i '' '/Lines/d' ../info/process/*branch.txt
sed -i '' '/Taken/d' ../info/process/*branch.txt
sed -i '' '/Calls/d' ../info/process/*branch.txt
sed -i '' '/Creating/d' ../info/process/*branch.txt
sed -i '' '/No/d' ../info/process/*branch.txt
sed -i '' '/^$/d' ../info/process/*branch.txt
sed -i '' 's/Branches executed://g' ../info/process/*branch.txt
sed -i '' 's/% of /,/g' ../info/process/*branch.txt

#Function:
sed -i '' '/^File/,/^Creating/{/^File/!{/^Creating/!d;};}' ../info/process/*function.txt
sed -i '' '/File/d' ../info/process/*function.txt
sed -i '' '/Creating/d' ../info/process/*function.txt
sed -i '' '/Function/d' ../info/process/*function.txt
sed -i '' '/No/d' ../info/process/*function.txt
sed -i '' '/^$/d' ../info/process/*function.txt
sed -i '' 's/Lines executed://g' ../info/process/*function.txt
sed -i '' 's/% of /,/g' ../info/process/*function.txt

