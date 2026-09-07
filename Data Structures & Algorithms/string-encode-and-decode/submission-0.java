class Solution {

    public String encode(List<String> strs) {
        String result = "";
        for (String item : strs) {
            int length = item.length();
            result += length + "#" + item;   
        }
        return result;
    }

    public List<String> decode(String encoded) {
         List<String> result = new ArrayList<>();

        int i = 0;  // pointer walking through the whole string

        while (i < encoded.length()) {
            // Step 1: collect all digits until we hit '#'
            int start = i;
            while (i < encoded.length() && Character.isDigit(encoded.charAt(i))) {
                i++;
            }

            if (i >= encoded.length() || encoded.charAt(i) != '#') {
                // malformed input — but for leetcode-style assume it's always correct
                break;
            }
            String lengthStr = encoded.substring(start, i);
            int length = Integer.parseInt(lengthStr);


            i++;


            if (i + length > encoded.length()) {

                break;
            }

            String word = encoded.substring(i, i + length);
            result.add(word);


            i += length;
        }

        return result;
    }
    }

