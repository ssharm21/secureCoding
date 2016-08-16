
#!/usr/bin/env python2.7
import tornado.ioloop
import tornado.web
import random

class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write("Hello, world")
        print "Bhakti was here"

def make_app():
    return tornado.web.Application([
        (r"/server", MainHandler),
    ])

if __name__ == "__main__":
    app = make_app()
    print "Tornado Version = " + tornado.version
    random.seed()
    app.listen(8888)
    tornado.ioloop.IOLoop.current().start()