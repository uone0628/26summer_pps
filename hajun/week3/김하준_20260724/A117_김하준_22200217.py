class Solution:
    def distanceBetweenBusStops(self, distance: list[int], start: int, destination: int) -> int:
        s, d = min(start, destination), max(start, destination)
        clockwise = sum(distance[s:d])
        return min(clockwise, sum(distance) - clockwise)