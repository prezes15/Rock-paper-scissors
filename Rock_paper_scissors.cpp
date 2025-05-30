#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

char wyborUsera();
char wyborKomputera();
void pokazWybor(char wybor, char wybor_PC);
void wybierzWygranego(char wybor, char wybor_PC);   



int main(){

    char wybor = wyborUsera();
    char wybor_PC = wyborKomputera();

    pokazWybor(wybor,wybor_PC);
    wybierzWygranego(wybor,wybor_PC);

    return 0;
}

char wyborUsera(){
    char wybor;

    cout << "gra w kamien papier nozyce\n";
    cout << "k-kamien p-papier n-nozyce\n";

    cin >> wybor;
    return wybor;
}

char wyborKomputera(){
    char wybor_PC;

    srand(time(NULL));
    int wybor_PC_L = (rand() % 3) + 1;

    if(wybor_PC_L == 1){
        wybor_PC = 'k';
    }
    else if(wybor_PC_L == 2){
        wybor_PC = 'p';
    }
    else if(wybor_PC_L == 3){
        wybor_PC = 'n';
    }
    
    return wybor_PC;
}
void pokazWybor(char wybor, char wybor_PC){
    string pelnywybor_c = "";
    string pelnywybor = "";

    if(wybor == 'k'){
        pelnywybor_c = "kamien";
    }
    else if(wybor == 'p'){
        pelnywybor_c = "papier";
    }
    else if(wybor == 'n'){
        pelnywybor_c = "nozyce";
    }

    if(wybor_PC== 'k'){
        pelnywybor = "kamien";
    }
    else if(wybor_PC == 'p'){
        pelnywybor = "papier";
    }
    else if(wybor_PC == 'n'){
        pelnywybor = "nozyce";
    }

    cout << "twoj wybor: " << pelnywybor_c << '\n';
    cout << "wybor komputera: " << pelnywybor << '\n';
}

void wybierzWygranego(char wybor, char wybor_PC){
    if(wybor == 'p' && wybor_PC == 'p' || wybor == 'k' && wybor_PC == 'k' || wybor == 'n' && wybor_PC == 'n' ){
        cout << "Remis";
    }
    if(wybor == 'k' && wybor_PC == 'n' || wybor == 'p' && wybor_PC == 'k' || wybor == 'n' && wybor_PC == 'p'){
        cout << "Wygrywasz";
    }
    if(wybor == 'k' && wybor_PC == 'p' || wybor == 'p' && wybor_PC == 'n' || wybor == 'n' && wybor_PC == 'k'){
        cout << "przegrywasz";
    }      
    
}