#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        vector <int> arrayCards;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            arrayCards.push_back(x);
        }
    
        
        int count = 0, i = 0;

        while (i + 2 < arrayCards.size()){
            if (arrayCards[i] == 0 && arrayCards[i + 2] == 0){
                count++;

                arrayCards[i + 1] = arrayCards[i];
            }
            else if (i + 3 < arrayCards.size() && arrayCards[i] == 0 && arrayCards[i + 1] == 0 && arrayCards[i + 3] == 0){
                count+=2;

                arrayCards[i + 2] = arrayCards[i];

                i++;
            }

            i++;
        }

        if (count % 2 == 0) cout<<"Bob\n";
        else cout<<"Alice\n";
    }      
           
}