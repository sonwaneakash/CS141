echo "What is your name"
read yourname
echo "Your name is $yourname"
mkdir $yourname
cd $yourname
for f in {1..5}; do touch $yourname$f.cpp;
done
