    #include <iostream>
     
    int main() {
        int a,b,c,T,ans=0;
        std::cin >> T;
        
        while (T--) {
            std::cin >> a >> b >> c;
            if((a==1&&b==1&&c==1)||(a==0&&b==1&&c==1)||(a==1&&b==0&&c==1)||(a==1&&b==1&&c==0)) { ans++;}
        }
        std::cout << ans;
        return 0;
    }
