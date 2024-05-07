
uint64_t asize = ele_cnt * (uint64_t)ele_size; // ele_size -> size_t

//1. Не не устранит, так как mallock  принемает int, а asize может быть больше int
//2. Как можно переделать данную функцию:

void* copy_elements(void *ele_src[], int ele_cnt, size_t ele_size) {
  uint64_t asize = ele_cnt * (uint64_t)ele_size;
  
  if (asize / INT_MAX > 0)
    return NULL;
  
  void *result = malloc(asize);
  int i;
  for ( i = 0; i < ele_cnt; i++ ) {
    memcpy(next, ele_src[i], ele_size);
    next += ele_size;
  }
  
}
