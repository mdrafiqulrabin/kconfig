 
 

__thread unsigned char tls_array[64];

unsigned char
tls_array_lookup_with_negative_constant(long long int position) {
  return tls_array[position - 1];
}

 

