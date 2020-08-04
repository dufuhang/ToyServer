#ifndef __EPOLL_SERVER_H__
#define __EPOLL_SERVER_H__

void epoll_run(int);
void do_read(int , int);
void disconnect(int , int );
void http_request(const char*, int);
void send_dir(int , const char* );
void send_respond_head(int , int , const char* , const char* , long );
void send_file(int , const char* );
int get_line(int sock, char*, int);
void do_accept(int, int);
int init_listen_fd(int,int);
void encode_str(char* , int , const char* );
void decode_str(char* , char* );
int hexit(char );
const char* get_file_type(const char* );

#endif
