void a(){

}

void b(){
 void (*x)(void) = a;
}


void c(){
  tdb_walk(1, a, 2);
}



void d(){
 void (*x)(void) = a;
 b();
}

void (*funcsarray[])(void) = {a, b, c, d}

void not_pointing_to_a() {
  a();
}
