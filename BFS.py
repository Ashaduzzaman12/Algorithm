
def bfs(graph, state):
    q = [state]
    visited = set()
    while q:
        node = q.pop(0)
        if node not in visited:
            visited.add(node)
            print(node)
            for i in graph[node]:
                if i not in visited:
                    q.append(i)

graph = {
    '0': ['1', '2','3'],
    '1': [],
    '2': [],
    '3': ['4'],
    '4': ['5'],
    '5': ['6'],
    '6': ['7'],
    '7': []
}

bfs(graph, '0')
