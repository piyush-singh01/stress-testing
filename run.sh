for((i=1;i<=1000;i++))
do  
    echo "$i"
    ./gen $i > input
    ./incorrect < input > out1
    ./brute < input > out2
    diff -w out1 out2 || break
done