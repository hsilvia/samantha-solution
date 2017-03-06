#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Samantha Dienesch-Calamari
/* This program uses C++ to solve the flash mob meeting point task. The number of flash mob members and their coordinates are inputted by the user. Then, the best intersection for the mob members to meet is outputted. The total blocks that all of the mob members had to walk are also counted. Certain issues with the logic behind finding the "best" intersection were encountered. More information might be needed to distinguish the qualifications for being the best intersection */

//The getdistance function calculates the distance in blocks between a member and the best intersection
int getdistance(int x, int y, int z, int w){
    
    int route, horizontal, vertical;
    route = 0;
    
    horizontal = (z - x);     //The coordinate (x, y) is the member's location while (z, w) is the best intersection
    vertical = (w - y);
    
    if(horizontal < 0){
        horizontal = horizontal * -1;
    }
    if(vertical < 0){
        vertical = vertical * -1;
    }
    
    route = horizontal + vertical;
    
    return route; //route signifies the route for one member
}


int main() {
    
    int i, members, hmeeting, vmeeting, totdistance = 0;
    double hsum = 0.0;
    double vsum = 0.0;
    bool keepgoing = true;

    //this while loop will keep going until the user inputs that there are 0 members
    while(keepgoing == true){

    cin >> members;
    
    if(members == 0{
    break;
    }
    vector<int> horizontal(members); //vector holds latitude coordinates
    vector<int> vertical (members); //vector holds longitude coordinates
    
    //for loop puts coordinates in to respective vectors and keeps a running some of the coordinates on each axis
    for(i = 0; i < members; i++){
        cin >> horizontal[i];
        hsum = hsum + horizontal[i];

        cin >> vertical[i];
        vsum = vsum + vertical[i];
        
    }
    
    //calculates the best meeting place by finding the average of the latitude and longitude coordinates
    
    hmeeting = (double (hsum / members)+0.5); 
    vmeeting = (double (vsum / members)+0.5);
    
    /*It is known that this is where the issues with the logic for the "best intersection" lies. It is understood, by looking at the sample output, that the problem seeks to optimize the blocks traveled in a different manner. I was unable to arrive at a methodology that satisfied all of the outcomes of the base cases */
    
//this for loop calculates the total distance of all of the mob members
    for(i = 0; i < members; i++){
        totdistance = totdistance + getdistance(horizontal[i], vertical[i], hmeeting, vmeeting);
    }
        totdistance -= 1;
    
    
    cout << "Case:" << "(" << hmeeting << ", " << vmeeting << ") " << totdistance << endl;
    
}
}


