void a(){

}

void b(){
 void (*x)(void) = a;
}


void c(){
 a();
}

void d(){
 void (*x)(void) = a;
 b();
}

