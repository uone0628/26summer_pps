class Solution:
    def maximumUnits(self, boxTypes: list[list[int]], truckSize: int) -> int:
        boxTypes.sort(key=lambda x: x[1], reverse=True)
        max_units = 0
        for count, units in boxTypes:
            take = min(count, truckSize)
            max_units += take * units
            truckSize -= take
            if truckSize == 0:
                break
        return max_units