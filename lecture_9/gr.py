class my_graph:
    def __init__(self,d):
        self.d = d
    def add_nodes(self,a):
        if a not in self.d.keys():
            self.d[a] = []
        else:
            # self.d[a].append(a)
            print("already exist")
    def print_graph(self):
        print(self.d)
    def add_edges(self,a,b):
        if a in self.d.keys():
            self.d[a].append(b)
        else:
            self.d[a] = [b]
        if b in self.d.keys():
            self.d[b].append(a)
        else:
            self.d[b] = [a]

m1 = my_graph({})
# m1.add_nodes('b')
m1.add_nodes("b")
m1.add_nodes("r")
m1.add_edges("r","s")
m1.add_edges("r","b")
m1.print_graph()


