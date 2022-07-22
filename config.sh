if [ !-d "/bin" ]; then 
    mkdir bin 
fi

cmake -S src -B bin