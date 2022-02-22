#include <iostream>
#include <vector>

int main() {
    std::vector <int> vec {2, 7, 11, 15};
    int sum=9;
    int min=0;
    int max=0;

    for(int j=0; j<vec.size(); j++){

        for (int i=j+1; i<vec.size(); i++ ){

            if(vec[j]+vec[i]==sum){
                min=vec[j];
                max=vec[i];
                break;

            }

        }
        if(min!=0&&max!=0)
            break;

    }
    std::cout << "Sum = " <<sum << " i - " << min<< " j - "<< max <<  std::endl;
    return 0;
}
