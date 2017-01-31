void a(){

}

int netlock;

void rw_enter_write(int n){
}

void c(){
 a();
 rw_enter_write(netlock);
}


void b(){
 a();
}

void pointer(){
 a;
 b;
 c;
}
