#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>


struct Position{
    int x;
    int y;
};

void generate_Direction(int &direction){
    direction = rand() % 4;
    return;
}

void generate_Speed( int &speed){
    if(rand()%130>speed){
        speed=speed+(rand()%20+1);
    }
    else{
        speed=speed-(rand()%20+1);
    }
    return;
}

void generate_Position(const int &direction, const int &speed, Position &pos){
    if(direction==0){
        if(speed==0){
            return;;
        }
        else if(speed<=40){
            pos.y=(pos.y+1)%50;
            return;
        }
        else if(speed<=80){
            pos.y=(pos.y+2)%50;
            return;
        }
        else if(speed<=130){
            pos.y=(pos.y+3)%50;
            return;
        }
    }
    else if(direction==1){
        if(speed==0){
            return;;
        }
        else if(speed<=40){
            pos.x=(pos.x+1)%50;
            return;
        }
        else if(speed<=80){
            pos.x=(pos.x+2)%50;
            return;
        }
        else if(speed<=130){
            pos.x=(pos.x+3)%50;
            return;
        }
    }
    else if(direction==2){
        if(speed==0){
            return;;
        }
        else if(speed<=40){
            pos.y=(pos.y-1)%50;
            return;
        }
        else if(speed<=80){
            pos.y=(pos.y-2)%50;
            return;
        }
        else if(speed<=130){
            pos.y=(pos.y-3)%50;
            return;
        }
    }
    else if(direction==3){
        if(speed==0){
            return;
        }
        else if(speed<=40){
            pos.x=(pos.x-1)%50;
            return;
        }
        else if(speed<=80){
            pos.x=(pos.x-2)%50;
            return;
        }
        else if(speed<=130){
            pos.x=(pos.x-3)%50;
            return;
        }
    }
}



int main() {

    int my_socket = -1;
    int result = -1;
    char buff[256];
    int portno=-1;

    my_socket= socket(AF_INET, SOCK_DGRAM, 0);
    if(my_socket<0){
        perror("failed to create UDP socket\n");
        return -1;
    }
    std::cout<<"Portnummer:";
    scanf("%d", &portno);
    std::cout<<"Eingabe bestätigt\n";

    sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(portno);
    server_addr.sin_addr=;




    int Direction=-1; //0=Norden 1=Osten 2=Süden 3=Westen
    int Speed=rand()%130;

    int PosX=-1;
    int PosY=-1;

    Position pos;
    pos.x=rand()%50;
    pos.y=rand()%50;

    while(1){
    generate_Direction(Direction);
    generate_Speed(Speed);
    generate_Position(Direction,Speed,pos);
    }

    return 0;
}