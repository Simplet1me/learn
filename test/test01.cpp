#include<iostream>
#include<string>
using namespace std;

class  Person
{
private:
    string name;
    float tmp;
    bool K;
public:
    string getName(){return name;}
    float getTmp(){return tmp;}
    bool getIsill(){return K;}
    void setName(string a){name=a;}
    void setTmp(float b){tmp=b;}
    void setK(bool c){K=c;}
    bool isIll(){
        if( tmp>=37.5 && K == true){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    int n,ans=0;
    string name1;
    float tmp1;
    bool K1;
    cin>>n;
    Person person[n];
    for (size_t i = 0; i < n; i++){
        cin>>name1>>tmp1>>K1;
        person[i].setName(name1);
        person[i].setTmp(tmp1);
        person[i].setK(K1);
    }
    for (size_t i = 0; i < n; i++){
        if (person[i].isIll()){
            cout<<person[i].getName()<<endl;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}