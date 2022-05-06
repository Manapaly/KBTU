
CREATE OR REPLACE FUNCTION get_parts_by_vendor2(id integer)
  RETURNS TABLE(part_name INTEGER, part_number VARCHAR) AS
$$
BEGIN
 RETURN QUERY

 SELECT parts.part_name, parts.part_number
 FROM parts
 INNER JOIN vendor_parts on vendor_parts.part_id = parts.part_id
 WHERE vendor_id = id;

END; $$

LANGUAGE plpgsql;