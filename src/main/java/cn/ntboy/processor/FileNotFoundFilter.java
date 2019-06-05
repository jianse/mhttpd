package cn.ntboy.processor;

import cn.ntboy.mhttpd.Request;
import cn.ntboy.mhttpd.Response;

import java.nio.file.Files;
import java.nio.file.Path;

public class FileNotFoundFilter implements Filter {
    @Override
    public FilterState doFilter(Request request, Response response) {
        Path path = RequestUtil.getVisitPath(request);
//        System.out.println(path);
        if(!Files.exists(path)){
            System.out.println(path);
            response.sendError(404);
            return FilterState.BREAK;
        }
        return FilterState.CONTINUE;
    }
}
