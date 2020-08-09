#### 主要函数
- `main():` 主函数，修改进程的工作目录，启动epoll模型

- `epoll_run():` epoll服务启动函数，创建epoll树的根节点

- `do_read():` 读取浏览器发过来的http请求并打印，判断是否为get请求

- `disconnect():` 断开连接，并将文件描述符从epoll树摘下

- `http_request():` 拆分http请求行，处理http请求

- `send_dir():` 拼接一个静态html页面，发送目录内容

- `send_respond_head():` 拼接并发送响应头

- `send_file():`  读取并发送文件内容

- `get_line():` 这个函数参考httpd中的同名函数，读取套接字的一行。
    > 其中以`MSG_PEEK`的方式从缓冲区以拷贝的方式读取数据，不清空缓冲区
    > 主要用于检测缓冲区是否有数据 

- `do_accept():` 接受新连接处理，将`accept`产生的套接字添加到epoll树上，并设置为边沿非阻塞模式

- `init_listen_fd():` 初始化监听套接字，并添加到epoll树上

- `encode_str() decode_str():` 解决乱码问题

- `hexit():` 将16进制转化为10进制，用于编码中

- `get_file_type():` 通过文件名获取文件的类型
