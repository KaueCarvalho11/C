    int funcao (int a, int b){
        if (a < b) {
            return 0;
        }
        return 1 + funcao(a - b, b);
    }