

#include <bits/stdc++.h>
using namespace std;
class Chandrayaan3 {
public:
    Chandrayaan3(int x, int y, int z, char direction) : x(x), y(y), z(z), direction(direction) {}

    void moveForward() {
        if (direction == 'N') {
            y++;
        } else if (direction == 'S') {
            y--;
        } else if (direction == 'E') {
            x++;
        } else if (direction == 'W') {
            x--;
        } else if (direction == 'U') {
            z++;
        } else if (direction == 'D') {
            z--;
        }
    }

    void moveBackward() {
        if (direction == 'N') {
            y--;
        } else if (direction == 'S') {
            y++;
        } else if (direction == 'E') {
            x--;
        } else if (direction == 'W') {
            x++;
        } else if (direction == 'U') {
            z--;
        } else if (direction == 'D') {
            z++;
        }
    }

    void turnLeft() {
        if (direction == 'N') {
            direction = 'W';
        } else if (direction == 'S') {
            direction = 'E';
        } else if (direction == 'E') {
            direction = 'N';
        } else if (direction == 'W') {
            direction = 'S';
        }
    }

    void turnRight() {
        if (direction == 'N') {
            direction = 'E';
        } else if (direction == 'S') {
            direction = 'W';
        } else if (direction == 'E') {
            direction = 'S';
        } else if (direction == 'W') {
            direction = 'N';
        }
    }

    void tiltUp() {
        if (direction == 'N' || direction == 'S') {
            direction = 'U';
        }
    }

    void tiltDown() {
        if (direction == 'N' || direction == 'S') {
            direction = 'D';
        }
    }

    void executeCommands(vector<char>commands) {
        for (int i = 0; i<commands.size(); i++) {
            char command = commands[i];
            if (command == 'f') {
                moveForward();
            } else if (command == 'b') {
                moveBackward();
            } else if (command == 'l') {
                turnLeft();
            } else if (command == 'r') {
                turnRight();
            } else if (command == 'u') {
                tiltUp();
            } else if (command == 'd') {
                tiltDown();
            }
        }
    }

    void printPositionAndDirection() {
        std::cout << "Final Position: (" << z<< ", " << y << ", " << x<< ")\n";
        std::cout << "Final Direction: " << direction << std::endl;
    }

private:
    int x, y, z;
    char direction;
};

int main() {
    
    
      vector<int>initialLoc;
      cout<<"Enter initial location: ";
      for(int i=0;i<3;i++){
        int x;
        cin>>x;
        initialLoc.push_back(x);
        }
      char initialDir;
      cout<<"Enter initial direction:";
      cin>>initialDir;
      Chandrayaan3 chandrayaan(initialLoc[0],initialLoc[1],initialLoc[2] ,initialDir);
  
    // Define the sequence of commands to execute
     vector<char>commands;
      int n;
      cout<<"Enter number of commands:";
        cin>>n;
  cout<<"Enter commands:";
  for(int i=0;i<n;i++){
    char x;
    cin>>x;
    commands.push_back(x);
  }

    chandrayaan.executeCommands(commands);

    chandrayaan.printPositionAndDirection();

    return 0;
}
