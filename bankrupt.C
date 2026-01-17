#include <iostream>
#include <random>
using namespace std;

int main() {
        int n = 10000000;  //試行回数
        random_device rd;
        mt19937 mt(rd());
        uniform_real_distribution<float> dist(0.,1);  //乱数発生(メルセンヌツイスター法)
        double b = 0;
        double w = 0;

        for(int i=0 ;i < n; i++){
            int a = 10; //初めの所持金10ドル
            while(a != 0 && a != 20){  //所持金が２倍になるか破産するまでゲームを続ける
                double r = dist(mt);
                if(r <= 0.45){  //45パーセントの確率で負ける（-1ドル）
                 a--;
                }
                else{  //55パーセントの確率で勝つ（+1ドル）
                 a++;
                }
            }
          if(a == 0){  //破産したらb（bankrupt）に１加える
              b++;
          }
          else if(a == 20){  //所持金が２倍になったらw（win）に１加える
              w++;
          }
        }
        double P = b/(b+w);
        cout << "確率は=" << P << endl;
}

// これは漸化式　a_{n} = 0.55 * a_{n+1} + 0.45 * a_{n-1} の解　a_{n} = (q^{10}-q^{20})/(1-q^{20}) (ただし、q= 0.45/0.55) になっている