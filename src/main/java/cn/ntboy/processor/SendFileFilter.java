package cn.ntboy.processor;

import cn.ntboy.mhttpd.Request;
import cn.ntboy.mhttpd.Response;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class SendFileFilter implements Filter {
    @Override
    public FilterState doFilter(Request request, Response response) throws IOException {
        if(request.getContext().getType().equals("static")){
            Path path = RequestUtil.getVisitPath(request);
            Files.copy(path,response.getOutputStream());
        }
        return FilterState.CONTINUE;
    }
}