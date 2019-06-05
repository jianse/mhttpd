package cn.ntboy.processor;

import cn.ntboy.mhttpd.Request;
import cn.ntboy.mhttpd.Response;

import java.io.IOException;

public interface Filter {

    FilterState doFilter(Request request, Response response) throws IOException;
}
