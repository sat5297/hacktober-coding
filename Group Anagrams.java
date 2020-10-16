Question:
Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]

Solution:
class Solution {
    public List<List<String>> groupAnagrams(String[] string_list) {

        List<List<String>> masterList=new ArrayList<>();
        Map<String,List<String>> map=new LinkedHashMap<>();
        for (String s : string_list) {
            char[] si=s.toCharArray();
            Arrays.sort(si);
            String key=String.valueOf(si);
            if(map.containsKey(key)){
                map.get(key).add(s);
            }else{
                List<String> list=new ArrayList<>();
                list.add(s);
                map.put(key,list);
            }
        }
        for(Map.Entry<String,List<String>> e:map.entrySet()){
            masterList.add(e.getValue());
        }

        return masterList;
    }
}