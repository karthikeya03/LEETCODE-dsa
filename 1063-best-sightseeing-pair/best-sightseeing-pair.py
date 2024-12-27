class Solution(object):
    def maxScoreSightseeingPair(self, values):
        n = len(values)
        result = 0
        max_i = values[0]

        for j in range(1, n):
            result = max(result, max_i + values[j] - j)
            max_i = max(max_i, values[j] + j)

        return result
