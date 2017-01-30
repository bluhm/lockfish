void a(){

}

void b(){
 void (*x)(void) = a;
}


void c(){
  int rdomain, dump_state;
  int rval = tdb_walk(rdomain, a, &dump_state);
}

void c2(){
  int rdomain, dump_state;
  int rval = tdb_walk(rdomain, a + 2 , &dump_state);
}




void d(){
 void (*x)(void) = a;
 b();
}

void (*funcsarray[])(void) = {a, b, c, d}

void not_pointing_to_a() {
  a();
}
